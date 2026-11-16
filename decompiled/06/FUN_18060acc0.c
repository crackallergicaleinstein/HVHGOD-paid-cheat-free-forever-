// FUN_18060acc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060acc0 */

/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180bb2030 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1808d72f0 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_18061f698();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = FUN_180621114(_C,8);
      return iVar1;
    }
  }
  return 0;
}



