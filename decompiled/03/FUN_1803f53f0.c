// FUN_1803f53f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f53f0 */

undefined8 FUN_1803f53f0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ULONGLONG UVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar5 = 0;
  uVar8 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar6 + uVar5);
      uVar5 = uVar5 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_180177b00(&DAT_180ccf460,local_28,param_2,uVar8);
  lVar7 = DAT_180ccf468;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar7 = *(longlong *)(lVar2 + 8);
  }
  if (lVar7 == DAT_180ccf468) {
    return 0;
  }
  UVar3 = GetTickCount64();
  plVar4 = (longlong *)FUN_1801b0c90(&DAT_180ccf4a0,local_18,param_2);
  *(ULONGLONG *)(*plVar4 + 0x30) = UVar3;
  return *(undefined8 *)(lVar7 + 0x30);
}



