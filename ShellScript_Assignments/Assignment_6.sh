#!/bin/bash

LOGFILE="app.log"

# Check if log file exists
if [ ! -f "$LOGFILE" ]; then
    echo "Log file not found"
    exit 1
fi

# Extract ERROR lines and process
grep "ERROR" "$Assigment_1.txt" | awk '{print $1, $2, $4, $5, $6, $7}'

