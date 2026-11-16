// FUN_18036bbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036bbc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036bbc0(undefined1 (*param_1) [16],byte *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong _Size;
  byte **ppbVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  byte *local_80;
  byte *local_78 [6];
  byte *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  pbVar8 = &DAT_180805570;
  local_80 = &DAT_180805570;
  local_78[0] = (byte *)0x180805578;
  local_78[1] = (byte *)0x180805580;
  local_78[2] = (byte *)0x180805590;
  local_78[3] = (byte *)0x1808055c0;
  local_78[4] = &DAT_1808055cc;
  local_78[5] = &DAT_1808055d4;
  ppbVar12 = &local_80;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  local_48[0] = param_2;
  do {
    uVar9 = 0xffffffffffffffff;
    do {
      uVar9 = uVar9 + 1;
    } while (pbVar8[uVar9] != 0);
    if (uVar9 < uVar1) {
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (pbVar8[uVar10] != 0);
      pbVar11 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pbVar11 = *(byte **)param_2;
      }
      _Size = uVar9;
      if (uVar10 < uVar9) {
        _Size = uVar10;
      }
      iVar7 = memcmp(pbVar11,pbVar8,_Size);
      if (((iVar7 == 0) && (uVar10 <= uVar9)) && (uVar9 <= uVar10)) {
        pbVar8 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          pbVar8 = *(byte **)param_2;
        }
        lVar13 = uVar1 - uVar9;
        FUN_18063aed0(pbVar8,pbVar8 + uVar9,lVar13 + 1);
        *(longlong *)(param_2 + 0x10) = lVar13;
LAB_18036bce4:
        bVar5 = true;
        if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
          pbVar8 = param_2;
        }
        else {
          pbVar8 = *(byte **)param_2;
        }
        pbVar11 = pbVar8 + *(longlong *)(param_2 + 0x10);
        for (; pbVar8 != pbVar11; pbVar8 = pbVar8 + 1) {
          bVar6 = *pbVar8;
          if (bVar6 == 0x5f) {
            bVar5 = true;
            bVar6 = 0x20;
          }
          else {
            if (bVar5) {
              iVar7 = toupper((uint)bVar6);
              bVar6 = (byte)iVar7;
            }
            else {
              iVar7 = tolower((uint)bVar6);
              bVar6 = (byte)iVar7;
            }
            bVar5 = false;
          }
          *pbVar8 = bVar6;
        }
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0;
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)*param_1 = *(undefined8 *)param_2;
        *(undefined8 *)(*param_1 + 8) = uVar2;
        *(undefined8 *)param_1[1] = uVar3;
        *(undefined8 *)(param_1[1] + 8) = uVar4;
        *param_2 = 0;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        param_2[0x18] = 0xf;
        param_2[0x19] = 0;
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        FUN_18015c010(param_2);
      }
    }
    ppbVar12 = ppbVar12 + 1;
    if (ppbVar12 == local_78 + 6) goto LAB_18036bce4;
    pbVar8 = *ppbVar12;
  } while( true );
}



