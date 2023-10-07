#include <stdio.h>
#include <stdlib.h>
unsigned maximum = 1024*1024*1024;
int main(int argc, char *argv[])
{
    unsigned blocksize[] = {1024*1024, 1024, 1};
    int i, count;
    void* block;
    for(i=0; i<sizeof(blocksize)/sizeof(unsigned); i++ )
        { for( count = 1; ;count++ )
            {
                 block = malloc( maximum +blocksize[i]*count );
                if( block!=NULL )
                 {
                    maximum= maximum + blocksize[i]*count;
                    free(block );
                }else 
            {
                break;
            }
            }
        }
    printf("maximummalloc size = %u bytes\n", maximum);
    return 0;
}
