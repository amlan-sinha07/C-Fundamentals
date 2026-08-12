/*Phase 1: Control Flow Mastery (Immediate Next Step)

Loop Mechanics: for, while, and do-while loops.

Loop Control Statements: break and continue (how they alter control flow).

Nested Loops & Patterns: Printing star/number matrices (tests nested logic for coding rounds).

Infinite Loops & Edge Cases: while(1) or for(;;) (crucial for microcontrollers / embedded main loops).
*/
#include <stdio.h>
int main(){
    // the while loop pre condition
    int count=0;
    while (count<5){
        printf("%d\n",count);
        count++;
    }
    // the do-while loop post condition
    int input;
    do {
        printf("press 0 for exit: ");
        scanf("%d",&input);
    } while (input != 0);
    // the for loop (counter based)
    for (int i=0;i<5;i++){
        printf("%d\n",i);
    }
    // altering the flow break and continue
    for (int i=0;i<=5;i++){
        if (i==2) continue;
        if (i==4) break;
        printf("%d\n",i);
    }
    // nested loops loops within loops
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("*");
        }
        printf("\n");
    }
    // infinite loops & embedded systems
    // while (1) {...}
    // for (;;) {...}
    // exercise 1 the mental trace
    // sum = 19
    // exercise 2 code construction
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    // exercise 3 bug check
    // i think because of continue loops running infinitely and return a time limit exceeded error 
    int sensor_read=0;
    while (sensor_read<5){
        if (sensor_read==2){
            sensor_read++;
            continue;
        }
        printf("Reading: %d\n",sensor_read);
        sensor_read++;
    }
    /*Here are the next logical topics to move into for Phase 1 control flow, arranged by ROI and placement priority:

**1. Switch-Case Statements & Jump Tables**

* **Why it matters:** Heavily tested in coding MCQs and core technical rounds.
* **Key concepts:** Fall-through behavior, default cases, jump table optimization in compilers,
 and using `enum` with switch statements.
* **Embedded context:** Essential for state machines (FSMs) in microcontroller firmware 
(e.g., handling menu systems, sensor modes, or protocol states).

**2. Functions, Call Stack, & Pass-by-Value/Reference**

* **Why it matters:** Every non-trivial program relies on modular code.
* **Key concepts:** Function prototypes, activation records on the call stack, global vs. local scope, 
`static` variables inside functions, and inline functions.
* **Embedded context:** Understanding function overhead is critical for real-time systems with tight memory limits.

**3. Bitwise Operators & Bit Manipulation (Embedded & Technical Favorite)**

* **Why it matters:** High-frequency topic for embedded engineering interviews and 
competitive programming optimization.
* **Key concepts:** Shift operators (`<<`, `>>`), bitwise AND/OR/XOR/NOT, setting, clearing, toggling, and 
checking specific bits (masking).
* **Embedded context:** Interacting directly with hardware registers (GPIO, UART, SPI) 
relies almost entirely on bit manipulation.

---

### Placement & Interview Priority

| Topic | Placement Priority | Common Interview Question Types |
| --- | --- | --- |
| **Switch-Case & FSMs** | Medium-High | Output prediction (fall-through bugs), designing state machines |
| **Functions & Call Stack** | High | Stack overflow scenarios, variable scope/lifetime, `static` usage |
| **Bitwise Operations** | Very High (Core/Embedded) | Check power of 2, count set bits, register bit
 manipulation without affecting other bits |*/
    return 0;
}