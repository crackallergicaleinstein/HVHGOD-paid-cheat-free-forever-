// FUN_1803aaae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aaae0 */

undefined8 * FUN_1803aaae0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint local_48;
  uint uStack_44;
  char local_40;
  char local_3f;
  uint local_3e;
  char local_3a;
  char local_39;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  uint local_32;
  char local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  uint local_28;
  char local_24;
  char local_22;
  
  if ((((((((param_2 != 0) && (param_3 != 0)) && (FUN_1803ab360(&local_40), local_22 != '\0')) &&
         ((local_40 == -0x75 && (local_3f == -0x7f)))) && (local_3a == -0x7c)) &&
       (((local_39 == -0x2e && (local_38 == 't')) &&
        ((local_37 == '\t' && (((local_36 == -1 && (local_35 == -0x40)) && (local_34 == -0x77)))))))
       ) && ((local_33 == -0x7f && (local_2e == -0x3d)))) &&
     (((local_2d == -0x7d &&
       (((local_2c == -0x18 && (local_2b == '\x01')) &&
        ((local_2a == -0x77 &&
         (((local_29 == -0x7f && (local_24 == 'u')) && (local_3e == local_32)))))))) &&
      (((local_3e == local_28 && (local_3e - 4 < 0x7ffd)) &&
       (uVar1 = param_3 + local_3e, param_3 <= uVar1)))))) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar1 == 0) {
      uStack_44 = uStack_44 & 0xffffff00;
      bVar2 = false;
    }
    else {
      local_48 = 0;
      cVar3 = FUN_1804514f0(&local_48,uVar1,4);
      if (cVar3 == '\0') {
        uStack_44 = (uint)uStack_44._1_3_ << 8;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        uStack_44 = CONCAT31(uStack_44._1_3_,1);
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((bVar2) && (local_48 < 0x41)) {
      *param_1 = CONCAT44(uStack_44,local_48);
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return param_1;
}



