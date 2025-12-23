
DEBUG=FALSE
# Enable debug 
if [ "$1" = "-d" ]; then
    DEBUG=true
    set -x  
else
    DEBUG=false
fi

DIR="TestDir"

# Checking if directory exists
if [ -d "$DIR" ]; then
    echo "Directory '$DIR' already exists"
else
    mkdir "$DIR" || { echo "Error: Permission denied to create directory"; exit 1; }
fi

# Creating 10 files
i=1
while [ $i -le 10 ]; do
    FILE="$DIR/File$i.txt"
    echo "File$i.txt" > "$FILE" || echo "Error creating $FILE"
    i=$((i+1))
done

# Debug message
if [ "$DEBUG" = true ]; then
    echo "Debug mode enabled"
fi


