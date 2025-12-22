

input_file="$Assignment_1.txt"
output_file="$Assignment_2.txt"

if [ ! -f "$Assignment_1.txt" ]; then
    echo "Input file not found"
    exit 1
fi

sed 's/old_text/new_text/g' "$Assignment_1.txt" > "$Assignment_2.txt"

echo "Replacement completed. Output saved in $Assignment_2.txt"

