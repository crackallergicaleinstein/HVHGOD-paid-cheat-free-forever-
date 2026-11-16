// FUN_18044b990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044b990 */

longlong FUN_18044b990(undefined8 param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  char *local_b8;
  ulonglong *puStack_b0;
  char *local_a8;
  longlong lStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  ulonglong uStack_80;
  ulonglong local_78 [5];
  longlong local_50;
  char *local_48;
  char *local_40;
  
  puStack_b0 = (ulonglong *)0xffffffffffffffff;
  do {
    puStack_b0 = (ulonglong *)((longlong)puStack_b0 + 1);
  } while (param_3[(longlong)puStack_b0] != '\0');
  local_b8 = param_3;
  lVar4 = FUN_1800e5c10(&local_b8);
  pcVar2 = *(char **)(param_4 + 8);
  if (pcVar2 == (char *)0x0) {
    local_b8 = (char *)0x0;
    puStack_b0 = (ulonglong *)0x0;
  }
  else {
    puStack_b0 = (ulonglong *)0xffffffffffffffff;
    do {
      puStack_b0 = (ulonglong *)((longlong)puStack_b0 + 1);
    } while (pcVar2[(longlong)puStack_b0] != '\0');
    local_b8 = pcVar2;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_3[lVar5] != '\0');
  local_a8 = local_b8;
  lStack_a0 = (longlong)puStack_b0;
  local_b8 = param_3;
  puStack_b0 = (ulonglong *)lVar5;
  lVar5 = FUN_1800e5d20(&local_b8,&local_a8);
  local_40 = "missing";
  if (pcVar2 != (char *)0x0) {
    local_40 = "valid";
  }
  if ((lVar4 == 0) || (lVar5 != lVar4)) {
    local_48 = "signature";
    if (lVar4 != 0) {
      local_48 = "signature-override";
    }
  }
  else {
    local_48 = "manifest";
  }
  local_a8 = "[globals] {}: {:#x} source={} pattern_metadata={}";
  lStack_a0 = 0x31;
  local_78[4] = param_2;
  local_78[0] = 0xb000000000000000;
  local_50 = lVar5;
  local_78[1] = 0x4000000000000008;
  local_78[2] = 0xb000000000000010;
  local_78[3] = 0xb000000000000018;
  local_b8 = (char *)0x4;
  puStack_b0 = local_78;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_98._1_15_;
  local_98 = auVar3 << 8;
  uVar9 = 0;
  uVar10 = 0;
  do {
    bVar8 = (byte)(local_78[uVar10] >> 0x3c);
    if (bVar8 == 0xc) {
      uVar9 = uVar9 + *(longlong *)((longlong)&local_50 + (local_78[uVar10] & 0xfffffffffffffff));
    }
    else if (bVar8 == 0xb) {
      uVar9 = uVar9 + 0x20;
    }
    else {
      uVar9 = uVar9 + 8;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  lVar4 = uVar9 + 0x31;
  if (0xffffffffffffffce < uVar9) {
    lVar4 = -1;
  }
  FUN_1800f5540(local_98,lVar4);
  FUN_1801da050(local_res10,local_98,&local_a8,&local_b8,0);
  puVar7 = local_98;
  if ((uStack_80 < 0x10) ||
     (puVar7 = (undefined1 *)local_98._0_8_, (undefined1 *)local_98._0_8_ != (undefined1 *)0x0)) {
    puVar6 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar6;
    puVar6 = (undefined1 *)FUN_1803b0a60();
    *puVar6 = 1;
    FUN_1800a9e50(1,puVar7);
    puVar7 = (undefined1 *)FUN_1803b0a60();
    *puVar7 = uVar1;
  }
  FUN_18015c010(local_98);
  return lVar5;
}



