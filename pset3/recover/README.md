## Pseudocode
	```
	    open card file
	    - FILE *file = fopen(argv[1], "r");
	
	    repeat until end of card
	    - while(fread(buffer, 1, 512, raw_file))
	
	        read 512 bytes into a buffer
	        - fread(data, size, number, inptr(file* to read from))
	        - fread(buffer, 1, 512, raw_file)
	
	        start of a new JPEG?
	        - first 3 bytes = 0xff, 0xd8, 0xff
	        - last bytes = 0xe0 - 0xe9, 0xea - 0xef
	        - if(buffer[0] == 0xff && buffer[1] == 0xd8 &&
	        buffer[2] == 0xff && (buffer[3] == 0xf0) == 0xe0)
	
	    already found a JPEG?
	    - file name = ###.jpg in order in which they are found
	    - use example sprintf(filename, "%03i.jpg", 2)
	    - filename: char array to store the resultant string = 002.jpg
	    - FILE *img = fopen(filename, "w");
	
	    - fwrite(data, size, number, outptr);
	    - fread(data, size, number, inptr);
	    - returns how many items of size were read
	
	    close any remaining file
	    - fread(buffer, 512, 1, raw_file)
	    - returns number of elements successfully read
	```
