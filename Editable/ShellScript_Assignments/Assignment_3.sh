
count_lines() {
    filename="$1"  
    if [ ! -f "$filename" ]; then
        echo "File '$filename' does not exist."
    else
        
        lines=$(wc -l < "$filename")
        echo "The file '$filename' has $lines line(s)."
    fi
}
echo "Counting lines in file1.txt:"
count_lines "Assignment_1.docx"



