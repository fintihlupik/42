grep -v "^#" | awk 'NR % 2 == 0' | sed 's/:.*//' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] $$ NR<= ENVIRON["FT_LINE2"] | tr '\n' ' ' | sed 's/ /, /g' | sed 's/ , $/ ./' | tr -d '\n'


