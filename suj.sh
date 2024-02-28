#!/bin/bash

# Function to validate process data and calculate waiting and turnaround times
process_info() {
    process_name="$1"
    arrival_time="$2"
    burst_time="$3"

    # Validate input
    if [[ ! $arrival_time =~ ^[0-9]+$ || ! $burst_time =~ ^[0-9]+$ ]]; then
        echo "Invalid input: arrival_time and burst_time must be positive integers"
        exit 1
    fi

    completed_processes+=("$process_name")
    waiting_time=$((total_waiting_time - arrival_time))
    turnaround_time=$((waiting_time + burst_time))
    total_waiting_time=$((total_waiting_time + waiting_time))
    total_turnaround_time=$((total_turnaround_time + turnaround_time))

    echo "$process_name $arrival_time $burst_time $waiting_time $turnaround_time"
}

# Validate command-line arguments
if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <process_name1> <arrival_time1> <burst_time1> [<process_name2> <arrival_time2> <burst_time2> ...]"
    exit 1
fi

# Initialize variables
completed_processes=()
total_waiting_time=0
total_turnaround_time=0

# Process execution loop
time_unit=0
while [ "$#" -ge 3 ]; do
    process_name="$1"
    arrival_time="$2"
    burst_time="$3"

    # Handle processes arriving at the same time
    if [[ ${#completed_processes[@]} -eq 0 || $arrival_time -eq ${completed_processes[-1]:-0} ]]; then
        time_unit=$((time_unit + burst_time))
    else
        time_unit=$((time_unit + arrival_time - ${completed_processes[-1]:-0}))
    fi

    # Process execution and information calculation
    echo "$time_unit: $process_name (arrival: $arrival_time, burst: $burst_time)"
    process_info "$process_name" "$arrival_time" "$burst_time"

    # Update time
    time_unit=$((time_unit + burst_time))

    # Shift to the next set of arguments
    shift 3
done

# Calculate average waiting and turnaround times
avg_waiting_time=$(awk "BEGIN { print $total_waiting_time / ($#/3) }")
avg_turnaround_time=$(awk "BEGIN { print $total_turnaround_time / ($#/3) }")

echo "Average Waiting Time: $avg_waiting_time"
echo "Average Turnaround Time: $avg_turnaround_time"
