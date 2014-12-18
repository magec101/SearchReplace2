#include <stdio.h>
#include <string.h>

void replace_string (char acString[], int iPos, int iLen, char acReplStr[]);

void searchReplace2Main(int argc, const char** argv, char result[]) {

	char acMainStr[100];
	char acSearchStr[50];
	char acReplStr[50];
	int i=0;
	int j=0;
	int iMatch=0;
	int iLenStr=0;
	int iPos;

    if (argc < 2)
    {
	    	scanf("%s", acMainStr);
	    	scanf("%s", acSearchStr);
	    	scanf("%s", acReplStr);
    }
	else
	{
	    	strcpy(acMainStr, argv[1]);
	    	strcpy(acSearchStr, argv[2]);
	    	strcpy(acReplStr, argv[3]);
	    	
	}
	
//	printf("%s1\n", argv[1]);
//	printf("%s2\n", argv[2]);
//	printf("%s3\n", argv[3]);
	

	iLenStr = strlen(acSearchStr);
	
    while (acMainStr[i] != '\0')
    {
    	if (acMainStr[i] == acSearchStr[j])
    	{
    		iMatch++;
    		if (iMatch == iLenStr)
    		{
    				replace_string (acMainStr, i-iLenStr+1, strlen(acSearchStr),  acReplStr);
    				i = i-iLenStr+strlen(acReplStr);
    		}
    		else
    		{
    			j++;
    			i++;
    			continue;
    		}
    	}
    	iMatch = 0;
    	j=0;
    	i++;
    }
	
	strcpy(result, acMainStr);
}

void replace_string (char acMainString[], int iPos, int iLen, char acReplStr[])
{
	int i;
	int j=0;
	char result[100];
	
	acMainString[iPos] = '\0';
	
	sprintf(result, "%s%s%s", acMainString, acReplStr, &acMainString[iPos+iLen] );
	
	strcpy(acMainString, result);
	/*

	for (i=iLen; i < iLen+strlen(acReplStr); i++)
	{
		acString[i] = acReplStr[j];
		j++;
	}

	*/
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	char result[100];
    searchReplace2Main(argc, argv, result);
    printf("%s", result);
    return 0;
}

#endif
