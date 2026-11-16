// FUN_180609df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180609df0 */

undefined1 FUN_180609df0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int *local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
  iVar7 = 0;
  uVar3 = 0;
  if (0 < *param_2) {
    do {
      uVar8 = uVar3;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar5 = FUN_180606324();
      local_res10 = (int *)((longlong)iVar9 + lVar5 + 4);
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar5 = FUN_180606324();
      iVar9 = *(int *)(lVar5 + iVar9);
      if (0 < iVar9) {
        do {
          iVar4 = *local_res10;
          lVar5 = FUN_180606324();
          iVar1 = param_2[1];
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          lVar6 = FUN_180606310();
          iVar4 = FUN_180608948(lVar6 + (longlong)iVar7 * 0x14 + (longlong)iVar1,iVar4 + lVar5,uVar2
                               );
          if (iVar4 != 0) {
            uVar8 = 1;
            break;
          }
          iVar9 = iVar9 + -1;
          local_res10 = local_res10 + 1;
        } while (0 < iVar9);
      }
      iVar7 = iVar7 + 1;
      uVar3 = uVar8;
    } while (iVar7 < *param_2);
  }
  return uVar8;
}



