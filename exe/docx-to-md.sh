#!/usr/bin/sh

chapter_dir=”../chapter/*”
chapters=`find $chapter_dir -type f -name *.docx`

mkdir ../temp_images

for chapter in $chapters
do
    markdown_filemane=${chapter%.*}
    pandoc -s $chapter -o "${markdown_filename}.md" --wrap=none --reference-links --standalone --extract-media=../temp_images --lua-filter ./docx-filter.lua
    cp ../temp_images/Media/* ../images
done