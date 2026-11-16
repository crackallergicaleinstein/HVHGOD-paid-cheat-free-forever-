// FUN_1805b60a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b60a0 */

void FUN_1805b60a0(longlong param_1,longlong param_2,longlong param_3,int *param_4,char *param_5,
                  int param_6)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  undefined8 local_3c;
  
  piVar1 = *(int **)(param_2 + 0x10);
  uVar10 = *(longlong *)(param_2 + 0x18) - (longlong)piVar1 >> 3;
  bVar8 = (byte)uVar10 & 1;
  uVar9 = (uint)uVar10;
  if (((*(char *)(param_1 + 0xc) == '\0') && ((uVar10 & 1) != 0)) && (*param_5 == '\0')) {
    if (uVar9 == 0) {
      piVar1 = *(int **)(param_2 + 8);
      if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
        *piVar1 = 0x82;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
      if (piVar1[1] == 1) {
        iVar4 = iVar4 + (iVar4 >> 0x1f) + 0x2000 >> 0xe;
      }
      else if (piVar1[1] == 2) {
        iVar4 = iVar4 << 0x10;
      }
    }
    *param_4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x328) + 0x21c) * 0x10000 +
               iVar4;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x340) == '\0') {
    uVar10 = (ulonglong)bVar8;
    if (bVar8 < uVar9) {
      uVar6 = bVar8 + 1;
      do {
        lVar3 = *(longlong *)(param_2 + 0x18);
        lVar5 = *(longlong *)(param_2 + 0x10);
        if ((uint)uVar10 < (uint)(lVar3 - lVar5 >> 3)) {
          iVar4 = *(int *)(lVar5 + 4 + uVar10 * 8);
          piVar1 = (int *)(lVar5 + uVar10 * 8);
          if (iVar4 == 1) {
            iVar4 = *piVar1;
            local_44 = iVar4 + (iVar4 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            local_44 = *piVar1;
            if (iVar4 == 2) {
              local_44 = local_44 << 0x10;
            }
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
            lVar5 = *(longlong *)(param_2 + 0x10);
            lVar3 = *(longlong *)(param_2 + 0x18);
          }
          local_44 = 0;
        }
        local_44 = param_6 + local_44;
        if (uVar6 < (uint)(lVar3 - lVar5 >> 3)) {
          iVar4 = *(int *)(lVar5 + 4 + (ulonglong)uVar6 * 8);
          param_6 = *(int *)(lVar5 + (ulonglong)uVar6 * 8);
          if (iVar4 == 1) {
            param_6 = param_6 + (param_6 >> 0x1f) + 0x2000 >> 0xe;
          }
          else if (iVar4 == 2) {
            param_6 = param_6 << 0x10;
          }
        }
        else {
          piVar1 = *(int **)(param_2 + 8);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
            *piVar1 = 0x82;
          }
          param_6 = 0;
        }
        param_6 = local_44 + param_6;
        local_48[0] = 0;
        local_3c = 0;
        local_40 = param_6;
        if ((*(longlong *)(param_3 + 0x20) != *(longlong *)(param_3 + 0x18)) ||
           (cVar2 = FUN_1805b50b0(param_3,*(longlong *)(param_3 + 0x18) * 2 + 0x10), cVar2 != '\0'))
        {
          FUN_18063aed0(*(longlong *)(param_3 + 0x10) * *(longlong *)(param_3 + 0x20) +
                        *(longlong *)(param_3 + 0x30),local_48);
          *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 1;
        }
        uVar7 = (uint)uVar10 + 2;
        uVar10 = (ulonglong)uVar7;
        uVar6 = uVar6 + 2;
      } while (uVar7 < uVar9);
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
    *param_5 = '\x01';
  }
  else {
    *param_5 = '\x01';
  }
  return;
}



