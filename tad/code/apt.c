#include "float_vector.h"
#include <stdio.h>

int main(){
    FloatVector *vec = create(10);
    FloatVector *conj = create(5);
    print(conj);
    print(vec);

    append(vec, 1.0);
    append(vec, 2.0);
    append(vec, 3.0);
    append(vec, 4.0);
    
    print(vec);

    destroy(&vec);

}