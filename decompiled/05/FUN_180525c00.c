// FUN_180525c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180525c00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180525c00(byte *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  pbVar1 = param_1 + 8;
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  local_38 = param_1;
  if (uVar2 == 0) {
    iVar14 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      plVar12 = (longlong *)
                (((((((ulonglong)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)param_1[1]) * 0x100000001b3 ^ (ulonglong)param_1[2]) * 0x100000001b3
                  ^ (ulonglong)param_1[3]) * 0x100000001b3 & DAT_180bbb2d0) * 0x10 + DAT_180bbb2b8);
      lVar7 = plVar12[1];
      if (lVar7 == DAT_180bbb2a8) {
LAB_180525e30:
        lVar7 = 0;
      }
      else {
        iVar4 = *(int *)(lVar7 + 0x10);
        while (*(int *)param_1 != iVar4) {
          if (lVar7 == *plVar12) goto LAB_180525e30;
          lVar7 = *(longlong *)(lVar7 + 8);
          iVar4 = *(int *)(lVar7 + 0x10);
        }
      }
      lVar6 = DAT_180bbb2a8;
      if (lVar7 != 0) {
        lVar6 = lVar7;
      }
      if (lVar6 != DAT_180bbb2a8) {
        *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + 0x14);
      }
    }
    lVar7 = DAT_180b909b0;
    if ((DAT_180b909b0 != 0) &&
       (lVar6 = *(longlong *)(DAT_180b909b0 + 0x58),
       0 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) - lVar6) / 0x68))) {
      iVar4 = *(int *)(param_1 + 4);
      lVar13 = 0;
      do {
        if ((*(int *)param_1 == *(int *)(lVar6 + lVar13)) && (iVar4 == *(int *)(lVar6 + 4 + lVar13))
           ) {
          puVar9 = (undefined8 *)(lVar6 + 8 + lVar13);
          if (0xf < *(ulonglong *)(lVar6 + 0x20 + lVar13)) {
            puVar9 = (undefined8 *)*puVar9;
          }
          sVar3 = *(size_t *)(param_1 + 0x18);
          pbVar11 = param_1 + 8;
          if (0xf < *(ulonglong *)(param_1 + 0x20)) {
            pbVar11 = *(byte **)(param_1 + 8);
          }
          if ((sVar3 == *(size_t *)(lVar6 + 0x18 + lVar13)) &&
             ((sVar3 == 0 || (iVar5 = memcmp(pbVar11,puVar9,sVar3), iVar5 == 0))))
          goto LAB_180525d87;
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 0x68;
      } while (iVar14 < (int)((*(longlong *)(lVar7 + 0x60) - lVar6) / 0x68));
    }
  }
  else {
    pbVar11 = pbVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      pbVar11 = *(byte **)pbVar1;
    }
    uVar10 = 0xcbf29ce484222325;
    iVar14 = 0;
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        uVar10 = (uVar10 ^ pbVar11[uVar8]) * 0x100000001b3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
    lVar6 = FUN_180177b00(&DAT_180bbe830,local_48,pbVar1,uVar10);
    lVar7 = DAT_180bbe838;
    if (*(longlong *)(lVar6 + 8) != 0) {
      lVar7 = *(longlong *)(lVar6 + 8);
    }
    if ((lVar7 != DAT_180bbe838) && (pbVar11 = (byte *)(lVar7 + 0x30), pbVar1 != pbVar11)) {
      if (0xf < *(ulonglong *)(lVar7 + 0x48)) {
        pbVar11 = *(byte **)pbVar11;
      }
      FUN_180113930(pbVar1,pbVar11,*(undefined8 *)(lVar7 + 0x40));
    }
    lVar7 = DAT_180b909b0;
    if ((DAT_180b909b0 != 0) &&
       (lVar6 = *(longlong *)(DAT_180b909b0 + 0x58),
       0 < (int)((*(longlong *)(DAT_180b909b0 + 0x60) - lVar6) / 0x68))) {
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      sVar3 = *(size_t *)(param_1 + 0x18);
      lVar13 = 0;
      do {
        puVar9 = (undefined8 *)(lVar6 + 8 + lVar13);
        pbVar11 = pbVar1;
        if (0xf < uVar2) {
          pbVar11 = *(byte **)pbVar1;
        }
        _Size = *(size_t *)(lVar6 + 0x18 + lVar13);
        if (0xf < *(ulonglong *)(lVar6 + 0x20 + lVar13)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if ((_Size == sVar3) && ((_Size == 0 || (iVar4 = memcmp(puVar9,pbVar11,_Size), iVar4 == 0)))
           ) {
LAB_180525d87:
          FUN_18015c010(param_1 + 0x48);
          FUN_18015c010(param_1 + 0x28);
          FUN_18015c010(pbVar1);
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 0x68;
      } while (iVar14 < (int)((*(longlong *)(lVar7 + 0x60) - lVar6) / 0x68));
    }
  }
  FUN_18015c010(param_1 + 0x48);
  FUN_18015c010(param_1 + 0x28);
  FUN_18015c010(pbVar1);
}



