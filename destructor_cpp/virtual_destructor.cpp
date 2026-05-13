#include<iostream>
using namespace std;

🔑 Common Tricky Questions
- Does every class have a vtable?
→ Only classes with at least one virtual function have a vtable.
- Does every object have a vptr?
→ Only objects of classes with virtual functions have a hidden vptr.
- When is the vtable created, and when is the vptr set?
→ vtable: compile time, per class.
→ vptr: runtime, per object, set in the constructor.
- Can constructors be virtual? Why or why not?
→ No, because vtable isn’t set up until after construction begins.
- Can destructors be virtual? Why should they be?
→ Yes, and they should be in polymorphic base classes to ensure proper cleanup of derived objects.
- What happens if you delete a derived object through a base pointer without a virtual destructor?
→ Only the base destructor runs → resource leak in derived.
- Can you overload a destructor?
→ No, only one destructor per class, fixed signature.
- Does a derived class always need to declare virtual functions?
→ No, it inherits base virtual functions automatically. It only overrides or adds new ones if needed.
- Does a base class object have a vptr?
→ Yes, if the base class has virtual functions. It points to the base vtable.
- Does a derived class object have a vptr?
→ Yes, if the base has virtual functions. Its vptr points to the derived vtable.

⚠️ Advanced/Trickier Variants
- What happens if a derived class doesn’t override a virtual function?
→ Its vtable entry points to the base implementation.
- Can static functions be virtual?
→ No, because they don’t operate on an object (no this).
- Can inline functions be virtual?
→ Yes, but “inline” is only a hint; virtual dispatch still happens at runtime.
- Can pure virtual destructors exist?
→ Yes, but they must still have a body (to clean up base resources).
- Does virtual function dispatch happen during construction/destruction?
→ No, during base constructor/destructor calls, virtual dispatch is suppressed — only base versions run.




