// FUN_18060ab60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060ab60 */

/* Library Function - Single Match
    isalnum
   
   Library: Visual Studio 2019 Release */

int __cdecl isalnum(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180bb2030 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1808d72f0 + (longlong)_C * 2) & 0x107;
    }
  }
  else {
    lVar2 = FUN_18061f698();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x107;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_180621114(_C,0x107,0);
      return iVar1;
    }
  }
  return 0;
}



