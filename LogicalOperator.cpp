#include <iostream>
using namespace std;

int main()
{
    // Logical Operators
    //  And (&&) Gives True(1) if both expression is True

    /*

    Exp1 |  Exp2  |  Output
    T    |   T    |    T
    T    |   F    |    F
    F    |   T    |    F
    F    |   F    |    F

    */

    cout << ((3 < 5) && (10 == 5)) << endl;  // False(0)

    // Logical Operators
    //  OR (||) Gives True(1) if one of the expression is True

    /*

    Exp1 |  Exp2  |  Output
    T    |   T    |    T
    T    |   F    |    T
    F    |   T    |    T
    F    |   F    |    F

    */
    cout << ((3 < 5) || (10 == 5)) << endl; //  False(0)

    // Logical Operators
    //  NOT (!) It flip the value False vaye True ra True vaye False

    /*

    Exp1 |  Exp2  |  Output
    T    |   T    |    T
    T    |   F    |    T
    F    |   T    |    T
    F    |   F    |    F

    */
   cout << (!(3 == 5)) << endl; //  False(0)
    return 0;
}