// FUN_1800abea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800abea0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800abea0(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  
  plVar8 = (longlong *)FUN_1800aa200();
  lVar2 = plVar8[1];
  for (lVar9 = *plVar8; lVar9 != lVar2; lVar9 = lVar9 + 0x70) {
    cVar1 = *(char *)(lVar9 + 4);
    if (cVar1 == '\0') {
      puVar6 = *(undefined1 **)(lVar9 + 8);
      *puVar6 = puVar6[0x60];
      *(undefined8 *)(puVar6 + 8) = 0;
      puVar6[0x10] = puVar6[0x60];
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      **(undefined1 **)(lVar9 + 8) = 0;
    }
    else if (cVar1 == '\a') {
      lVar5 = *(longlong *)(lVar9 + 8);
      uVar7 = 0;
      if (*(int *)(lVar9 + 0x10) != 0) {
        do {
          *(undefined1 *)((ulonglong)uVar7 + lVar5) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(lVar9 + 0x10));
      }
    }
    else if (cVar1 == '\t') {
      plVar3 = *(longlong **)(lVar9 + 8);
      pcVar4 = *(code **)(*plVar3 + 0x10);
      local_28 = (undefined1  [16])0x0;
      FUN_1800f4e90(local_38,local_28,0,1);
      (*pcVar4)(plVar3,local_38);
      FUN_1801409d0(local_30,local_38[0]);
    }
  }
  if ((code *)plVar8[9] != (code *)0x0) {
    (*(code *)plVar8[9])();
  }
  return;
}



