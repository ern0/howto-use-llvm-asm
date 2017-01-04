# include <stdlib.h>
# include <stdio.h>

extern "C" int increment(int p);

int main() {
        printf("%d \n", increment(41) );
        return 0;
}
