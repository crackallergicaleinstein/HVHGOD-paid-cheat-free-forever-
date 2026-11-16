// FUN_1806220ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806220ac */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1806220ac(uint param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  code *pcVar9;
  ulonglong *puVar10;
  undefined4 local_res10;
  
  plVar2 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_180622103:
    if (param_1 == 2) {
      puVar10 = (ulonglong *)&DAT_180bb2108;
    }
    else if (param_1 == 6) {
LAB_1806221a5:
      puVar10 = &DAT_180bb2118;
    }
    else if (param_1 == 0xf) {
      puVar10 = (ulonglong *)&DAT_180bb2120;
    }
    else if (param_1 == 0x15) {
      puVar10 = (ulonglong *)&DAT_180bb2110;
    }
    else {
      if (param_1 == 0x16) goto LAB_1806221a5;
      puVar10 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_180622133;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_180622185;
      }
      goto LAB_180622103;
    }
LAB_180622133:
    plVar2 = (longlong *)FUN_18061f6f8();
    if (plVar2 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar6 = *plVar2;
    lVar4 = lVar6 + 0xc0;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x10) {
      if (*(uint *)(lVar6 + 4) == param_1) goto LAB_180622180;
    }
    lVar6 = 0;
LAB_180622180:
    if (lVar6 == 0) {
LAB_180622185:
      puVar3 = (undefined4 *)FUN_18060fe00();
      *puVar3 = 0x16;
      FUN_18060aad4();
      return 0xffffffff;
    }
    puVar10 = (ulonglong *)(lVar6 + 8);
    bVar1 = false;
  }
  lVar6 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar9 = (code *)*puVar10;
  if (bVar1) {
    bVar8 = (byte)DAT_1808d5f00 & 0x3f;
    pcVar9 = (code *)(((ulonglong)pcVar9 ^ DAT_1808d5f00) >> bVar8 |
                     ((ulonglong)pcVar9 ^ DAT_1808d5f00) << 0x40 - bVar8);
  }
  if (pcVar9 == (code *)0x1) goto LAB_18062228e;
  if (pcVar9 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_18061a074(3);
    pcVar9 = (code *)swi(3);
    uVar7 = (*pcVar9)();
    return uVar7;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar6 = plVar2[1];
    plVar2[1] = 0;
    if (param_1 == 8) {
      lVar4 = FUN_18061f698();
      local_res10 = *(undefined4 *)(lVar4 + 0x10);
      lVar4 = FUN_18061f698();
      *(undefined4 *)(lVar4 + 0x10) = 0x8c;
      goto LAB_180622246;
    }
  }
  else {
LAB_180622246:
    if (param_1 == 8) {
      lVar4 = *plVar2;
      for (lVar5 = lVar4 + 0x30; lVar5 != lVar4 + 0xc0; lVar5 = lVar5 + 0x10) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      goto LAB_18062228e;
    }
  }
  *puVar10 = DAT_1808d5f00;
LAB_18062228e:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar9 != (code *)0x1) {
    if (param_1 == 8) {
      lVar4 = FUN_18061f698();
      (*pcVar9)(8,*(undefined4 *)(lVar4 + 0x10));
    }
    else {
      (*pcVar9)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar2[1] = lVar6, param_1 == 8)) {
      lVar6 = FUN_18061f698();
      *(undefined4 *)(lVar6 + 0x10) = local_res10;
    }
  }
  return 0;
}



