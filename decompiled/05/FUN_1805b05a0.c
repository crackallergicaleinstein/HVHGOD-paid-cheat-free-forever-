// FUN_1805b05a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b05a0 */

int FUN_1805b05a0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_res20 [2];
  code *local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_40 = FUN_1805affd0;
  local_res20[0] = 0;
  lVar3 = FUN_18057abe0(uVar1,0x400,local_res20);
  if (local_res20[0] != 0) {
LAB_1805b078a:
    FUN_18057abd0(uVar1,lVar3);
    return local_res20[0];
  }
  uVar5 = 0;
  uVar7 = 0;
  iVar10 = 1;
  uVar9 = 0x400;
LAB_1805b0620:
  iVar2 = FUN_180578980(param_1,uVar7 + lVar3,uVar9 - (int)uVar7);
  uVar6 = (int)uVar7 + iVar2;
  uVar7 = (ulonglong)uVar6;
  if (iVar2 != 0) {
    do {
      if (uVar5 < uVar6) {
        pcVar4 = (char *)((ulonglong)uVar5 + lVar3);
        do {
          if ('\x1f' < *pcVar4) break;
          uVar5 = uVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (uVar5 < uVar6);
      }
      uVar8 = uVar5 + 1;
      if (uVar6 <= uVar8) goto LAB_1805b067e;
      pcVar4 = (char *)((ulonglong)uVar8 + lVar3);
      while ('\x1f' < *pcVar4) {
        uVar8 = uVar8 + 1;
        pcVar4 = pcVar4 + 1;
        if (uVar6 <= uVar8) goto LAB_1805b067e;
      }
      pcVar4 = (char *)((ulonglong)uVar5 + lVar3);
      *(undefined1 *)((ulonglong)uVar8 + lVar3) = 0;
      if (*pcVar4 != '#') {
        if (local_40 == FUN_1805affd0) {
          local_res20[0] = FUN_1805affd0(pcVar4,uVar8 - uVar5,iVar10,param_2,&local_40);
        }
        else {
          local_res20[0] = (*local_40)(pcVar4,uVar8 - uVar5,iVar10,param_2,&local_40);
        }
        if (local_res20[0] != 0) break;
      }
      iVar10 = iVar10 + 1;
      uVar5 = uVar8 + 1;
    } while( true );
  }
  *param_3 = iVar10;
  goto LAB_1805b078a;
LAB_1805b067e:
  if (uVar5 == 0) {
    if (0xffff < uVar9) {
      local_res20[0] = 3;
      goto LAB_1805b078a;
    }
    lVar3 = FUN_18057ac40(uVar1,1,uVar9,uVar9 * 4,lVar3,local_res20);
    if (local_res20[0] != 0) goto LAB_1805b078a;
    uVar9 = uVar9 * 4;
  }
  else {
    uVar7 = (ulonglong)(uVar6 - uVar5);
    FUN_18063aed0(lVar3,(ulonglong)uVar5 + lVar3,uVar6 - uVar5);
    uVar5 = 0;
  }
  goto LAB_1805b0620;
}



