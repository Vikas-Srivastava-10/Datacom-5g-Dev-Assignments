
logfile="Assignment_6.txt"


if [ ! -f "$logfile" ]; then
    echo "Error: The log file '$logfile' does not exist."
    exit 1
fi

grep "ERROR" "$logfile" | \
awk '{print $1, $2, substr($0, index($0,$3))}' | \
sed 's/^\([0-9\-]* [0-9:]*\) \(ERROR.*\)$/\1 - \2/' 



