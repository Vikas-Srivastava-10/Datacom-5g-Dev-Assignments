
input_file="Assignment_7.txt"
old_text="apple"
new_text="orange"

if [ ! -f "$input_file" ]; then
    echo "Error: File '$input_file' does not exist."
    exit 1
fi

output_file="${input_file%.txt}_modified.txt"

sed "s/$old_text/$new_text/g" "$input_file" > "$output_file"

echo "Replaced all occurrences of '$old_text' with '$new_text' in '$input_file'."
echo "The result has been saved to '$output_file'."


