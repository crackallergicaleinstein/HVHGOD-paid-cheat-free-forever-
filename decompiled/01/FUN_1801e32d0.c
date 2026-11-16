// FUN_1801e32d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e32d0 */

undefined8 *
FUN_1801e32d0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4,
             int param_5)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong local_48;
  ulonglong uStack_40;
  
  if (param_4 != 0) {
    uVar6 = (uint)(param_4 >> 0x34);
    iVar5 = uVar6 - 0x433;
    if ((param_5 == 2) && (0 < iVar5)) {
      FUN_1801e35f0(param_1,param_2,param_3,0,0);
    }
    else {
      local_48 = param_4 & 0xfffffffffffff | 0x10000000000000;
      if ((uVar6 - 0x3ff < 0x35) &&
         (uVar6 = -iVar5, bVar7 = (byte)uVar6, sVar1 = (bVar7 < 0x41) * ('@' - bVar7),
         (local_48 << sVar1) >> sVar1 == 0)) {
        local_48 = local_48 >> ((ulonglong)uVar6 & 0x3f);
        iVar5 = 0;
        uVar2 = uStack_40 >> 0x20;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        if ((int)local_48 == (int)(local_48 / 10) * 10) {
          uVar3 = local_48 / 10;
          do {
            local_48 = uVar3;
            iVar5 = iVar5 + 1;
            uVar3 = local_48 / 10;
          } while ((int)local_48 == (int)(local_48 / 10) * 10);
          uStack_40 = CONCAT44((int)uVar2,iVar5);
        }
      }
      else {
        puVar4 = (ulonglong *)FUN_1801e2620(&local_48,param_4 & 0xfffffffffffff);
        local_48 = *puVar4;
        uStack_40 = puVar4[1];
      }
      FUN_1801e2c10(param_1,param_2,param_3,&local_48,param_5,param_4);
    }
    return param_1;
  }
  if (param_5 == 1) {
    if (4 < (longlong)param_3 - (longlong)param_2) {
      *param_2 = 0x302b6530;
      *(undefined1 *)(param_2 + 1) = 0x30;
      *param_1 = (undefined1 *)((longlong)param_2 + 5);
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  else if (param_2 != param_3) {
    *(undefined1 *)param_2 = 0x30;
    *param_1 = (undefined1 *)((longlong)param_2 + 1);
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}



