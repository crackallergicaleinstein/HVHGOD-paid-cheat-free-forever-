// FUN_180307b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180307b00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180307b00(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  DAT_180c646f1 = 0;
  if (param_2 == 0) {
    DAT_180c646f1 = 0;
  }
  cVar1 = FUN_180306f60();
  if (cVar1 == '\0') {
  }
  if (DAT_180c646f0 != '\0') {
  }
  if (DAT_180b90050 != '\0') {
  }
  if (DAT_180b8fffc != '\0') {
  }
  if (DAT_180b90028 != '\0') {
  }
  if (DAT_180b900c0 != '\0') {
  }
  if (DAT_180b8fc30 != '\0') {
  }
  if (DAT_180b8fe80 != '\0') {
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar4 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar4 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (puVar4 == (uint *)0x0) {
  }
  uVar7 = FUN_180306ed0();
  if ((DAT_180b8e114 & 1) == 0) {
    if (DAT_180b8fba8 != '\0') {
    }
    if (DAT_180b8fbfc == '\0') {
      FUN_180307ed0(uVar7,param_2,uVar7);
      DAT_180c646f1 = 1;
    }
  }
  DAT_180c646f1 = 1;
  uVar9 = uVar7;
  if (DAT_180c6f378 == 0) {
    if (DAT_180c64058 == 0) goto LAB_180307d7c;
    pcVar2 = (char *)&local_b8;
    uVar3 = 0x811c9dc5;
    local_98 = 0xdb35e39b27e1c185;
    uStack_90 = 0xa05181ee77d57a06;
    cVar1 = 's';
    local_88 = 0x929654b1461b7377;
    local_78 = 0xa5cea54bfef7110;
    uStack_80 = 0xa5cea54bfef7110;
    local_a8 = 0x706e695f746e656d;
    uStack_a0 = 0x7475;
    uStack_b0 = 0x65766f6d5f657a69;
    do {
      pcVar2 = pcVar2 + 1;
      uVar3 = ((int)cVar1 ^ uVar3) * 0x1000193;
      cVar1 = *pcVar2;
    } while (cVar1 != '\0');
    local_b8 = &local_78;
    local_78 = CONCAT44(0xa5cea54,uVar3);
    local_70 = 0;
    uStack_b0 = 1;
    uVar7 = FUN_18044c9c0(DAT_180c64058,&local_b8);
    DAT_180c6f378 = local_70;
    if (local_70 == 0) goto LAB_180307d7c;
  }
  if (*(char *)(DAT_180c6f378 + 0x58) != '\0') {
    fVar8 = (float)puVar4[0x12];
    fVar12 = (float)puVar4[0x13];
    fVar11 = fVar12 * fVar12 + fVar8 * fVar8;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18061e150();
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (fVar11 < 0.001) {
    }
    auVar10 = ZEXT464((uint)(DAT_180b0dfc8._4_4_ * 0.017453292));
    fVar5 = (float)FUN_180637540(DAT_180b0dfc8._4_4_ * 0.017453292);
    fVar6 = (float)FUN_180638e00(auVar10._0_8_);
    fVar8 = fVar8 / fVar11;
    fVar12 = fVar12 / fVar11;
    local_70 = local_70 & 0xffffffff00000000;
    local_78 = CONCAT44(fVar8 * fVar6 + fVar12 * fVar5,fVar8 * fVar5 - fVar12 * fVar6);
    uVar7 = FUN_1803070e0();
    fVar11 = (float)FUN_180307590(uVar7,&local_78,uVar7);
    *puVar4 = *puVar4 | 0xc0;
    puVar4[0x13] = (uint)(fVar12 * fVar11);
    puVar4[0x12] = (uint)(fVar8 * fVar11);
  }
LAB_180307d7c:
  FUN_180307ed0(uVar7,param_2,uVar9);
}



