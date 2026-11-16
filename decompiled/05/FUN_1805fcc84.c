// FUN_1805fcc84 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fcc84 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::shared_ptr<struct _EXCEPTION_RECORD const >::`scalar
   deleting destructor'(unsigned int) __ptr64
    public: void * __ptr64 __cdecl std::shared_ptr<class __ExceptionPtr>::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)((longlong)this + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_1804547d0(this,0x10);
  }
  return this;
}



