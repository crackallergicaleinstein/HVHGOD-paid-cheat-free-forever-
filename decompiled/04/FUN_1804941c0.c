// FUN_1804941c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804941c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804941c0(byte *param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  undefined1 local_50 [32];
  undefined8 ***local_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_78 = 0;
  if (param_2 != 0) {
    bVar1 = *param_1;
    pbVar5 = param_1;
    while (bVar1 != 0) {
      if (0x7f < bVar1) {
        plVar4 = (longlong *)FUN_180493fd0(local_50);
        bVar3 = false;
        bVar2 = true;
        goto LAB_180494251;
      }
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    local_70 = (undefined1  [16])0x0;
    auStack_60 = (undefined1  [16])0x0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_1[lVar8] != 0);
    FUN_18015ba30(local_70);
    plVar4 = (longlong *)local_70;
    bVar3 = true;
    bVar2 = false;
LAB_180494251:
    local_30 = (undefined8 ***)*plVar4;
    lStack_28 = plVar4[1];
    uStack_20 = plVar4[2];
    uStack_18 = plVar4[3];
    *(undefined1 *)plVar4 = 0;
    plVar4[2] = 0;
    plVar4[3] = 0xf;
    if (bVar2) {
      FUN_18015c010(local_50);
    }
    if (bVar3) {
      FUN_18015c010(local_70);
    }
    uVar7 = 0xbf;
    if (uStack_20 < 0xbf) {
      uVar7 = uStack_20;
    }
    pppuVar6 = &local_30;
    if (0xf < uStack_18) {
      pppuVar6 = local_30;
    }
    FUN_18063aed0(param_2,pppuVar6,uVar7);
    *(undefined1 *)(uVar7 + param_2) = 0;
    FUN_18015c010(&local_30);
  }
}



