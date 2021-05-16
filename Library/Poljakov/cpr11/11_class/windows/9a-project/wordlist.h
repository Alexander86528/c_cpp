typedef struct {
       char word[40];
       int count;
     } TPair;
typedef struct {     
       TPair *data;
       int capacity;
       int size;
     } TWordList;
void IncSize ( TWordList *pL );
int Find( TWordList L, char word[] );
int FindPlace ( TWordList L, char word[] );
void printList ( TWordList L );
void InsertWord ( TWordList *pL, int k, char word[] );