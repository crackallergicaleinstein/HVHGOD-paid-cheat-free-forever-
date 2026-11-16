// FUN_1805d4de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d4de0 */

undefined8 FUN_1805d4de0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  char *local_res8;
  longlong local_res18;
  ulonglong local_res20;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  uVar1 = param_2[1];
  local_res8 = *(char **)(param_2 + 4);
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar2 = *param_2;
    local_res20 = (ulonglong)uVar2;
    if (uVar2 == *(uint *)((longlong)param_1 + 0xc)) {
      iVar10 = (int)param_1[0xc] * 0x10000;
      if (0 < (int)uVar2) {
        local_res18 = 0;
        do {
          if (0 < (int)uVar1) {
            uVar8 = (ulonglong)uVar1;
            lVar7 = local_res18;
            pcVar9 = local_res8;
            do {
              iVar5 = *(int *)(*param_1 + lVar7);
              if ((iVar5 < 0) || (iVar10 < iVar5)) {
                iVar5 = iVar10;
              }
              cVar3 = '\x01';
              if (*(byte *)(*param_1 + 0xc + lVar7) < 0x7f) {
                cVar3 = -1;
              }
              cVar6 = -cVar3;
              if (*(char *)((longlong)param_1 + 100) == '\0') {
                cVar6 = cVar3;
              }
              iVar4 = FUN_180573310(cVar6 * iVar5,iVar10);
              iVar5 = -iVar4;
              if (-iVar4 < 0) {
                iVar5 = iVar4;
              }
              iVar5 = iVar5 >> 9;
              if (iVar4 < 1) {
                if ((iVar4 < 0) && (0x80 < iVar5)) {
                  iVar5 = 0x80;
                }
              }
              else if (0x7f < iVar5) {
                iVar5 = 0x7f;
              }
              cVar3 = -(char)iVar5;
              if (-1 < iVar4) {
                cVar3 = (char)iVar5;
              }
              lVar7 = lVar7 + 0x10;
              *pcVar9 = cVar3 + -0x80;
              pcVar9 = pcVar9 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          local_res8 = local_res8 + (int)uVar1;
          local_res18 = local_res18 + (longlong)(int)uVar1 * 0x10;
          local_res20 = local_res20 - 1;
        } while (local_res20 != 0);
      }
      return 0;
    }
  }
  return 6;
}



