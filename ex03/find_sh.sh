find . -type f -name "*.sh" -print | rev | sed 's/^\(hs\)*//g' | sed 's/^\.*//g' | cut -d / -f 1 | rev 
