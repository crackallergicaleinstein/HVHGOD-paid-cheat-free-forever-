// FUN_1801f6690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f6690 */

void FUN_1801f6690(longlong param_1,undefined8 *param_2,longlong param_3)

{
  size_t sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Buf2;
  
  puVar6 = param_2 + 4;
  _Buf2 = (void *)(param_1 + 0x20);
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    _Buf2 = *(void **)(param_1 + 0x20);
  }
  sVar1 = param_2[6];
  puVar5 = puVar6;
  if (0xf < (ulonglong)param_2[7]) {
    puVar5 = (undefined8 *)*puVar6;
  }
  if ((sVar1 == *(size_t *)(param_1 + 0x30)) &&
     ((sVar1 == 0 || (iVar3 = memcmp(puVar5,_Buf2,sVar1), iVar3 == 0)))) {
    puVar5 = param_2;
    lVar4 = param_1;
  }
  else {
    lVar4 = param_1 + 0x20;
    puVar5 = puVar6;
  }
  cVar2 = FUN_180114040(puVar5,lVar4);
  if (cVar2 < '\0') {
    FUN_1801f65e0(param_2,param_1);
  }
  puVar5 = (undefined8 *)(param_3 + 0x20);
  if (0xf < (ulonglong)param_2[7]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  sVar1 = *(size_t *)(param_3 + 0x30);
  if (0xf < *(ulonglong *)(param_3 + 0x38)) {
    puVar5 = (undefined8 *)*puVar5;
  }
  if ((sVar1 == param_2[6]) && ((sVar1 == 0 || (iVar3 = memcmp(puVar5,puVar6,sVar1), iVar3 == 0))))
  {
    lVar4 = param_3;
    puVar6 = param_2;
  }
  else {
    puVar6 = param_2 + 4;
    lVar4 = param_3 + 0x20;
  }
  cVar2 = FUN_180114040(lVar4,puVar6);
  if (-1 < cVar2) {
    return;
  }
  FUN_1801f65e0(param_3,param_2);
  puVar6 = (undefined8 *)(param_1 + 0x20);
  puVar5 = param_2 + 4;
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    puVar6 = (undefined8 *)*puVar6;
  }
  sVar1 = param_2[6];
  if (0xf < (ulonglong)param_2[7]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  if ((sVar1 == *(size_t *)(param_1 + 0x30)) &&
     ((sVar1 == 0 || (iVar3 = memcmp(puVar5,puVar6,sVar1), iVar3 == 0)))) {
    puVar6 = param_2;
    lVar4 = param_1;
  }
  else {
    lVar4 = param_1 + 0x20;
    puVar6 = param_2 + 4;
  }
  cVar2 = FUN_180114040(puVar6,lVar4);
  if (cVar2 < '\0') {
    FUN_1801f65e0(param_2,param_1);
  }
  return;
}



