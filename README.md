# Primus Box Development Guidelines

## Functions

- C preprocessor directives are used to simplify primus code

## Directory Structure

- each box group (long and short, orders 1 to order x, and stock and hedge in pairs) get one directory
- each box in the group will have its own file
- the processed files go into a pp folder in the box group folder to keep them separate from main files

## Preprocessing

- the preprocessing directives are stored in a bat file for easy calls from the command line
- gcc -E flag is used to say preprocess only
- -P flag silences meta-data output
- -o flag specifies the output location 
- gcc file_name.c -E -o pp/file_name.i -P

## Box Template

- each box file is started with a template which covers all the necessary sections of black box design form

## Github Sync

- each directory gets its own github repository
- at the time you run a test be it rule change or coefficient commit the change to github  
- this will give you file history for every version restorable from github.com

## Versions

- each version documents a single change arrived at as a result of analysis of a previous version's test result
- because only one change is allowed per version other changes  are queued up as todos on top of document for further versions
- the most recently tested version is placed on top of the document under the todos because it's the most relevant  
- as new versions can be rejected, the best version replaces them on the top, this means that the versions will not necessarily be in order

## Version numbering

- x.y x is rule change, y is coefficient change
- so 1.0 and 1.1 are the same rules just one coefficient has changed
- built on version x, is also documented under the change documentation
- do not use the bb description because a. it's space is limited b. it distracts you from primary documentation c. it's extra work, and d. multi-line descriptions do not copy and paste well into excel

## Running Tests

- breaking down boxes for faster more efficient testing
- break down earnings OPG boxes into season
- break down earnings PlainVanilla boxes into weeks
- break down OPG boxes into years
- break down PlainVanilla boxes into months

## Hypothesizing

- write what do you expect the change result in or what do you hope to get from this change
- this also serves as a reminder that a. you are expecting test results and b. what where you thinking which can easily be forgotten when working on multiple boxes simultaneously

## Analyzing

- post the screen clips of stats and charts
- do a quick analysis right up with link to the stats and charts
- brainstorm solutions to problem and note them in TODOs
