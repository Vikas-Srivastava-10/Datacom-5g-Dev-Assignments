count_lines() {
    filename="$1"

    if [ -f "$filename" ]; then
        lines=$(wc -l < "$filename")
        echo "File: $filename -> Number of lines: $lines"
    else
        echo "File: $filename -> File not found"
    fi
}
count_lines "Assignment_1.txt"
