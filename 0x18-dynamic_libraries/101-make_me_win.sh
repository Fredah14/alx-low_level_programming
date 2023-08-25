#!/bin/bash

# Compile and upload the custom shared library (assuming it's named "libhack.so")
scp libhack.so mss@gm_server:/path/to/destination/

# Sleep for 98 seconds (98 seconds before MSS runs gm)
sleep 98

# Set LD_PRELOAD and run gm with the desired numbers
ssh mss@gm_server "LD_PRELOAD=/path/to/destination/libhack.so ./gm 9 8 10 24 75 9"

# Wait a bit
sleep 5

# Clean up
ssh mss@gm_server "rm /path/to/destination/libhack.so"
rm 101-make_me_win.sh
