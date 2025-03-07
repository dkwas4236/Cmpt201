//Name: Darion Kwasnitza
//ID: 3122890
//Lab: AS04


//Purpose: to determine if there are roots, and if so what the roots are
//Parameters: const double*, const double*, const double*, double*, double*
//Return: int(2 if 2 roots, 1 if 1 root, 0 if no roots)
int qroots(const double*,const double*,const double*,double*,double*);

//Purpose: to determine number of chars, type, and case of string
//Parameters: const char*, int*, char*, char*
//Return: int(1 if successful, 0 if failed)
int strstats(const char*,int*,char*,char*);

//Purpose: to determine what case string is
//Parameters: const char*, char*, int* 
//Return: int(1 if successful, 0 if failed) 
int determineCase(const char*,char*,int*);

//Purpose: to determine what type string is
//Parameters: const char*, char*, int*
//Return: int(1 if successful, 0 if failed)
int determineType(const char*,char*,int*);

//Purpose: to check input for certain format and store day, month, year
//Parameters: const char*, int*, int*
//Return: int(1 if successful, 0 if failed)
int atod(const char*,int*,int*,int*);
