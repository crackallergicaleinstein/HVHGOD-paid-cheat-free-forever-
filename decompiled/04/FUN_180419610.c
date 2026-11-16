// FUN_180419610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419610 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180419610(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_688 [32];
  undefined **local_668;
  undefined1 *local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined1 local_638 [16];
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined1 auStack_600 [16];
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  undefined8 uStack_5e4;
  undefined8 uStack_5dc;
  undefined8 uStack_5d4;
  undefined8 uStack_5cc;
  undefined4 uStack_5c4;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  undefined8 local_5b4;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined8 local_59c;
  undefined4 local_594;
  undefined8 local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined8 local_57c;
  undefined8 uStack_574;
  undefined8 uStack_56c;
  undefined8 uStack_564;
  undefined8 local_55c;
  undefined8 uStack_554;
  undefined8 uStack_54c;
  undefined8 uStack_544;
  undefined8 uStack_53c;
  char local_530;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  local_650 = param_6[1];
  local_660 = (undefined1 *)(param_5 + 0xc);
  local_658 = *param_6;
  local_668 = (undefined **)param_5;
  FUN_180418670(param_6,local_638);
  cVar8 = DAT_180c7d7d8;
  lVar10 = 2;
  if (local_530 == '\0') {
    LOCK();
    DAT_180c7d7d8 = '\x01';
    UNLOCK();
    if (cVar8 == '\0') {
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"path=generic_hull action=fail_open");
      local_668 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_668 = (undefined **)&DAT_1806bcfc0;
      }
      local_660 = local_638;
      FUN_1800f6900(2);
    }
    local_638 = (undefined1  [16])0x0;
    uStack_5e4 = 0;
    uStack_5dc = 0;
    uStack_5d4 = 0;
    uStack_5cc = 0;
    local_57c = 0;
    uStack_574 = 0;
    uStack_56c = 0;
    uStack_564 = 0;
    local_55c = 0;
    uStack_554 = 0;
    uStack_54c = 0;
    uStack_544 = 0;
    uStack_628 = 0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    uStack_5c4 = 0;
    local_588 = 0;
    local_580 = 0;
    uStack_53c = 0;
    uStack_5c0 = *param_3;
    local_5b8 = *(undefined4 *)(param_3 + 1);
    local_5b4 = *param_4;
    local_59c = *param_4;
    local_5ac = *(undefined4 *)(param_4 + 1);
    local_594 = *(undefined4 *)(param_4 + 1);
    local_590 = 0x3f80000000000000;
    local_5a8 = 0;
    local_5a4 = 0;
    local_5a0 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    local_618 = 0;
    uStack_614 = 0;
    uStack_610 = 0;
    uStack_60c = 0;
    uStack_608 = 0;
    uStack_604 = 0;
    auStack_600 = (undefined1  [16])0x0;
    puVar9 = (undefined8 *)local_638;
    do {
      puVar1 = param_2 + 0x10;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      uVar3 = puVar9[0xe];
      uVar4 = puVar9[0xf];
      puVar2 = puVar9 + 0x10;
      *param_2 = *puVar9;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
      uVar5 = puVar9[5];
      uVar6 = puVar9[6];
      uVar7 = puVar9[7];
      param_2[4] = puVar9[4];
      param_2[5] = uVar5;
      param_2[6] = uVar6;
      param_2[7] = uVar7;
      uVar5 = puVar9[9];
      uVar6 = puVar9[10];
      uVar7 = puVar9[0xb];
      param_2[8] = puVar9[8];
      param_2[9] = uVar5;
      param_2[10] = uVar6;
      param_2[0xb] = uVar7;
      uVar5 = puVar9[0xd];
      param_2[0xc] = puVar9[0xc];
      param_2[0xd] = uVar5;
      param_2[0xe] = uVar3;
      param_2[0xf] = uVar4;
      lVar10 = lVar10 + -1;
      puVar9 = puVar2;
      param_2 = puVar1;
    } while (lVar10 != 0);
    *puVar1 = *puVar2;
  }
  else {
    puVar9 = (undefined8 *)local_638;
    do {
      puVar1 = param_2 + 0x10;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      uVar3 = puVar9[0xe];
      uVar4 = puVar9[0xf];
      puVar2 = puVar9 + 0x10;
      *param_2 = *puVar9;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
      uVar5 = puVar9[5];
      uVar6 = puVar9[6];
      uVar7 = puVar9[7];
      param_2[4] = puVar9[4];
      param_2[5] = uVar5;
      param_2[6] = uVar6;
      param_2[7] = uVar7;
      uVar5 = puVar9[9];
      uVar6 = puVar9[10];
      uVar7 = puVar9[0xb];
      param_2[8] = puVar9[8];
      param_2[9] = uVar5;
      param_2[10] = uVar6;
      param_2[0xb] = uVar7;
      uVar5 = puVar9[0xd];
      param_2[0xc] = puVar9[0xc];
      param_2[0xd] = uVar5;
      param_2[0xe] = uVar3;
      param_2[0xf] = uVar4;
      lVar10 = lVar10 + -1;
      puVar9 = puVar2;
      param_2 = puVar1;
    } while (lVar10 != 0);
    *puVar1 = *puVar2;
  }
}



