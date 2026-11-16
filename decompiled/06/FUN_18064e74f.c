// FUN_18064e74f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064e74f */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18064e74f(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  longlong *plVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  byte bVar8;
  longlong lVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x328);
  uVar6 = (**(code **)(*plVar3 + 8))(plVar3);
  FUN_18063ab10(param_2 + 0x410,0,0x600);
  FUN_18015ad60(param_2 + 0x410,0x600,0xffffffffffffffff,"error=%s",uVar6);
  FUN_1800f6900(2);
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    *(char **)(param_2 + 0x290) = "tier0.dll:g_pMemAlloc";
    *(undefined8 *)(param_2 + 0x298) = 0x15;
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x290);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x298);
    DAT_180c7df28 = (undefined8 *)FUN_180451750(param_2 + 0x60);
  }
  pauVar4 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd8);
  *(undefined1 (**) [16])(param_2 + 800) = pauVar4;
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    pauVar4 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar4 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar4 + 8) = 1;
    *(undefined4 *)(*pauVar4 + 0xc) = 1;
    *(undefined ***)*pauVar4 =
         std::_Ref_count_obj2<features::changer::custom_agents::catalog>::vftable;
    FUN_18063ab10(pauVar4 + 1,0,200);
    FUN_1801ed6e0(pauVar4 + 1);
  }
  *(undefined1 (*) [16])(param_2 + 0x60) = (undefined1  [16])0x0;
  *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x400;
  pauVar1 = pauVar4 + 1;
  *(undefined1 (**) [16])(param_2 + 0x60) = pauVar1;
  *(undefined1 (**) [16])(param_2 + 0x68) = pauVar4;
  pauVar7 = *(undefined1 (**) [16])(param_2 + 0xf8);
  if (pauVar1 != pauVar7) {
    pauVar2 = pauVar7 + 1;
    if (7 < *(ulonglong *)(pauVar7[1] + 8)) {
      pauVar7 = *(undefined1 (**) [16])*pauVar7;
    }
    FUN_1800f5190(pauVar1,pauVar7,*(undefined8 *)*pauVar2);
  }
  lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)(lVar5 + lVar9) != '\0');
  FUN_180113930(pauVar4 + 0xb,lVar5);
  *(undefined1 (*) [16])(param_2 + 0x60) = (undefined1  [16])0x0;
  uVar6 = FUN_180113860(&DAT_180bb9388);
  *(undefined1 (**) [16])(param_2 + 0xb0) = DAT_180bb9380;
  LOCK();
  UNLOCK();
  bVar8 = (byte)DAT_180bb9388;
  DAT_180bb9380 = pauVar1;
  DAT_180bb9388 = pauVar4;
  if ((bVar8 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  *(undefined8 *)(param_2 + 0xb8) = uVar6;
  FUN_1800efed0(param_2 + 0xb0);
  return 0;
}



