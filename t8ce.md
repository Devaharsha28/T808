# T8CE

basically its T8 Character Encoding

This is characters encoding for my T8 cpu
this is just version 1 of my T8CE 
as we have ascii for regular computers 

ive tried one just like ascii for my cpu

this is done in tb/cpu_with_display.cpp file 
and yeah just the file  name says display even though its just single character output 

run it with verilator command in readme just change the file name from cpu_tb.cpp to this filename cpu_with_display.cpp

this file has a c++ array of 256 elements and has set up characters for certain values of port1
this is just port 1 till now 

the encoding goes this way 


|Hex|Character|
|---|---|
|'null'|00|
|0|01|
|1|02|
|2|03|
|3|04|
|4|05|
|5|06|
|6|07|
|7|08|
|8|09|
|9|0A|
|A|0B|
|B|0C|
|C|0D|
|D|0E|
|E|0F|
|F|10|
|G|11|
|H|12|
|I|13|
|J|14|
|K|15|
|L|16|
|M|17|
|N|18|
|O|19|
|P|1A|
|Q|1B|
|R|1C|
|S|1D|
|T|1E|
|U|1F|
|V|20|
|W|21|
|X|22|
|Y|23|
|Z|24|
|#|25|
|'|'|26|
|■|27|
|\|28|
|/|29|
|_|2A|
|+|2B|
|-|2C|
|*|2D|
|÷|2E|
|[|2F|
|]|30|
|(|31|
|)|32|
|{|33|
|}|34|
|:|35|
|=|36|
|<|37|
|>|38|
|$|39|
|,|3A|
|!|3B|
|.|3C|
|&|3D|
|^|3E|
|"|3F|
|'SPACE'|40|

