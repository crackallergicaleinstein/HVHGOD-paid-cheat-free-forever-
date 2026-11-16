// FUN_1805a6280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6280 */

int FUN_1805a6280(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x18);
  do {
    uVar6 = uVar6 + 1;
    uVar4 = 0;
    uVar5 = uVar1;
    uVar3 = uVar1 >> 1;
    while( true ) {
      if (uVar5 <= uVar4) {
        if ((uVar4 < uVar1) && (uVar4 != 0)) {
          *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 0x10);
          return uVar4 + 1;
        }
        *param_2 = 0;
        return 0;
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 0x10);
      if (uVar2 == uVar6) break;
      if (uVar2 < uVar6) {
        uVar4 = uVar3 + 1;
      }
      else {
        uVar5 = uVar3;
      }
      uVar3 = uVar3 + (uVar6 - uVar2);
      if ((uVar5 <= uVar3) || (uVar3 < uVar4)) {
        uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
      }
    }
    if (uVar3 != 0) {
      *param_2 = uVar6;
      return uVar3 + 1;
    }
  } while( true );
}



