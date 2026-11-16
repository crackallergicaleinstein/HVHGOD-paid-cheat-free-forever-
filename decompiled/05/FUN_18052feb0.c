// FUN_18052feb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052feb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052feb0(float *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_258 [32];
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [152];
  undefined1 local_160 [152];
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_258;
  if (DAT_1808e4fc0 != 6) {
    puVar4 = (undefined8 *)FUN_180439710();
    plVar2 = (longlong *)puVar4[1];
    for (plVar10 = (longlong *)*puVar4; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      if (*plVar10 != 0) {
        *(undefined2 *)(*plVar10 + 0x20) = 0x101;
      }
    }
    lVar5 = FUN_180439770();
    *(undefined8 *)(lVar5 + 0x428) = 0;
    DAT_1808e4fc0 = 6;
  }
  _eh_vector_constructor_iterator_(local_1f8,0x98,3,FUN_180530220,FUN_18042c020);
  lVar5 = 0;
  lVar11 = 3;
  do {
    FUN_1805508a0(local_1f8 + lVar5,(longlong)&DAT_180bbabe8 + lVar5);
    plVar2 = DAT_180c630b0;
    lVar5 = lVar5 + 0x98;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  plVar10 = DAT_180c630a8;
  if (DAT_180c630a8 != DAT_180c630b0) {
    do {
      plVar3 = (longlong *)*plVar10;
      if (plVar3 != (longlong *)0x0) {
        *plVar10 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
    DAT_180c630b0 = DAT_180c630a8;
  }
  iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
  FUN_1803d1400(DAT_180b0a41c * 50.0,DAT_180b0a41c * 145.0,DAT_180b0a41c * 145.0 + *param_1,
                DAT_180b0a41c * 50.0 + param_1[1]);
  lVar5 = DAT_180bb8ae8;
  _DAT_1808e4fbc = 0xffffffff;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  FUN_18052fad0(*(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8),&DAT_180bbabe8);
  FUN_1805508a0(local_1f8,&DAT_180bbabe8);
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  FUN_18052fad0(*(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8),&DAT_180bbac80);
  FUN_1805508a0(local_160,&DAT_180bbac80);
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  FUN_18052fad0(*(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8),&DAT_180bbad18);
  FUN_1805508a0(local_c8,&DAT_180bbad18);
  if (iVar1 < 1) {
    local_218 = DAT_180b0a41c * 625.0 + *param_1;
    local_214 = DAT_180b0a41c * 468.0 + param_1[1];
    local_210 = DAT_180b0a41c * 145.0 + *param_1;
    local_20c = DAT_180b0a41c * 50.0 + param_1[1];
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar8 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
    pcVar6 = "##native_page_surface";
    cVar7 = '#';
    uVar9 = uVar8;
    do {
      pcVar6 = pcVar6 + 1;
      if (((cVar7 == '#') && (*pcVar6 == '#')) && (pcVar6[1] == '#')) {
        pcVar6 = pcVar6 + 2;
        uVar9 = uVar8;
      }
      else {
        uVar9 = crc32(uVar9,cVar7);
      }
      cVar7 = *pcVar6;
    } while (cVar7 != '\0');
    uVar9 = ~uVar9;
    if (*(uint *)(*plVar2 + 0x1534) == uVar9) {
      FUN_1804cf810(uVar9,0xb,"##native_page_surface");
    }
    FUN_1804aad60(local_208,uVar9,&local_210,&local_218);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x98,3,FUN_18042c020);
}



