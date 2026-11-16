// FUN_1804174b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804174b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1804174b0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char *******pppppppcVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  undefined1 auStack_b8 [48];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  char *******local_60 [2];
  longlong local_50;
  ulonglong local_48;
  ulonglong local_38;
  
  lVar5 = DAT_180c7d7b0;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_78 = 0xdb35e39b27e1c185;
  local_68 = 0xa05181ee77d57a06;
  uStack_70 = 0xa05181ee77d57a06;
  local_88 = 0x642e746e65696c63;
  uStack_80 = 0x6c6c;
  if (DAT_180c7d7b0 != 0) {
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    plVar4 = (longlong *)FUN_180417820(&local_78,lVar5);
    if ((char)plVar4[1] == '\0') {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if (lVar5 != 0) {
      local_68 = 0;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      FUN_180417880(lVar5);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if (local_68 != 0) {
        lVar5 = local_68 + 0x30;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        if (lVar5 == 0) {
          bVar1 = false;
          uVar10 = local_68;
        }
        else {
          local_88 = 0;
          cVar2 = FUN_1804514f0(&local_88,lVar5,8);
          if (cVar2 == '\0') {
            bVar1 = false;
            uVar10 = local_68;
          }
          else {
            bVar1 = true;
            uVar10 = local_88;
          }
        }
        lVar5 = FUN_18017ea70();
        uVar8 = local_68;
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (!bVar1) {
          uVar10 = 0;
        }
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        bVar1 = false;
        if (uVar8 + 0x24 != 0) {
          local_88 = local_88 & 0xffffffffffff0000;
          cVar2 = FUN_1804514f0(&local_88,uVar8 + 0x24,2);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        uVar11 = (ushort)local_88;
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (!bVar1) {
          uVar11 = 0;
        }
        if (((uVar10 != 0) && ((ushort)(uVar11 - 1) < 0x1000)) && (uVar9 = 0, uVar11 != 0)) {
          uVar8 = local_68;
          do {
            lVar5 = FUN_18017ea70();
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
            lVar5 = (ulonglong)uVar9 * 0x20 + uVar10;
            if (lVar5 == 0) {
              bVar1 = false;
            }
            else {
              local_88 = 0;
              cVar2 = FUN_1804514f0(&local_88,lVar5,8);
              if (cVar2 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                uVar8 = local_88;
              }
            }
            lVar3 = FUN_18017ea70();
            if (*(int *)(lVar3 + 4) != 0) {
              *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
            }
            if ((bVar1) && (uVar8 != 0)) {
              FUN_180454030(local_60,uVar8,0x100);
              if (local_50 != 0) {
                pppppppcVar6 = (char *******)local_60;
                if (0xf < local_48) {
                  pppppppcVar6 = local_60[0];
                }
                if (pppppppcVar6 == (char *******)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 0x811c9dc5;
                  cVar2 = *(char *)pppppppcVar6;
                  while (cVar2 != '\0') {
                    pppppppcVar6 = (char *******)((longlong)pppppppcVar6 + 1);
                    uVar7 = ((int)cVar2 ^ uVar7) * 0x1000193;
                    cVar2 = *(char *)pppppppcVar6;
                  }
                }
                if (uVar7 == param_2) {
                  lVar3 = FUN_18017ea70();
                  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
                  if (lVar5 + 0x10 != 0) {
                    local_88 = local_88 & 0xffffffff00000000;
                    FUN_1804514f0(&local_88,lVar5 + 0x10,4);
                  }
                  lVar5 = FUN_18017ea70();
                  if (*(int *)(lVar5 + 4) != 0) {
                    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                  }
                  FUN_18015c010(local_60);
                }
              }
              FUN_18015c010(local_60);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar11);
        }
      }
    }
  }
}



