// FUN_180596600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180596600 */

ulonglong FUN_180596600(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x300);
  lVar2 = FUN_180573a00(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((((lVar2 == 0) || (puVar3 == (undefined8 *)0x0)) ||
      (pcVar1 = (code *)*puVar3, pcVar1 == (code *)0x0)) ||
     (puVar3 = (undefined8 *)(*pcVar1)(lVar2), puVar3 == (undefined8 *)0x0)) {
    return 0;
  }
  uVar4 = (*(code *)*puVar3)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_res8);
  if ((int)uVar4 == 0) {
    *(undefined8 *)param_1[7] = local_res8;
    return uVar4 & 0xffffffff;
  }
  return uVar4;
}



