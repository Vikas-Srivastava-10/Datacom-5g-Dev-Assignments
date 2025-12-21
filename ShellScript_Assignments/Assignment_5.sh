#!/bin/bash

# -------- DEBUG MODE --------
DEBUG=false
if [ "$1" = "-d" ]; then
    DEBUG=true
    echo "[DEBUG] Debug mode enabled"
fi

log_debug() {
    if $DEBUG; then
        echo "[DEBUG] $1"
    fi
}

DIR="TestDir"

# -------- DIRECTORY CHECK --------
if [ -d "$DIR" ]; then
    echo "Directory '$DIR' already exists."
    log_debug "Using existing directory: $DIR"
else
    mkdir "$DIR" 2>/dev/null
    if [ $? -ne 0 ]; then
        echo "Error: Cannot create directory '$DIR'. Permission denied."
        exit 1
    fi
    log_debug "Directory '$DIR' created."
fi

# -------- PERMISSION CHECK --------
if [ ! -w "$DIR" ]; then
    echo "Error: No write permission in '$DIR'."
    exit 1
fi

cd "$DIR" || exit 1
log_debug "Changed directory to $(pwd)"

# -------- FILE CREATION --------
for i in {1..10}
do
    filename="File$i.txt"
    echo "$filename" > "$filename" 2>/dev/null

    if [ $? -ne 0 ]; then
        echo "Error: Failed to create $filename"
        exit 1
    fi

    log_debug "Created $filename"
done

echo "Files created successfully."

