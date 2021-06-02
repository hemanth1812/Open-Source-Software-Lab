# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer;

	char data[100]
		= "open source software";
		gets(data);

	filePointer = fopen("OSSA1.txt", "w");

	if ( filePointer == NULL )
	{
		printf( "OSSA1.txt not found" );
	}
	else
	{

		printf("file is opened.\n");
		if ( strlen ( data ) > 0 )
		{
			fputs(data, filePointer);
			fputs("\n", filePointer);
		}

		fclose(filePointer);

	}
	return 0;
}
