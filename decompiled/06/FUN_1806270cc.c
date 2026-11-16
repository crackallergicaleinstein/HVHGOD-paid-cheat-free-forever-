// FUN_1806270cc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806270cc */

int FUN_1806270cc(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180bb1c40; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180bb1c48 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_1806116f4(*(undefined8 *)(DAT_180bb1c48 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180bb1c48 + lVar4 * 8) + 0x30));
      FUN_180621380(*(undefined8 *)(DAT_180bb1c48 + lVar4 * 8));
      *(undefined8 *)(DAT_180bb1c48 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}



