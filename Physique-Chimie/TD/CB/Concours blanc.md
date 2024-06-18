# Etude d'une inégalité
## 1.
Par équivalence: 
$$a \in \mathbb{R}_{+} \Leftrightarrow \mathrm{Re}(a) \geq 0 \text{ et } \mathrm{Im}(a) = 0$$
$$\Leftrightarrow \left| a\right| = \sqrt{ \mathrm{Re}(a)^{2} + \mathrm{Im}(a)^{2} } = \mathrm{Re}(a)$$

## 2.
$$(\left| z\right| +  \left| w\right|)^{2} = \left| z\right|^{2}  + \left| w\right|^{2} + 2 \left| z\right|\left| w\right|$$
$$\left| z\right|\left| w\right| = \sqrt{ (\mathrm{Re}(z)^{2}+\mathrm{Im}(z)^{2})(\mathrm{Re}(w)^{2}+\mathrm{Im}(w)^{2})}$$
$$\sqrt{ \mathrm{Re}(w)^{2}\mathrm{Re}(z)^{2} + \mathrm{Re}(z)^{2} \mathrm{Im}(w)^{2} + \mathrm{Im}(z)^{2}\mathrm{Re}(w)^{2} + \mathrm{Im}(z)^{2}\mathrm{Im}(w)^{2} } $$
$$= \left| z\right|\left| \bar{w}\right|$$
Alors, 
$$\boxed{(\left| z\right| + \left| w\right|)^{2} = \left| z\right|^{2} + \left| w\right|^{2} + 2 \left| z \bar{w}\right|}$$
ensuite :
$$\left| z + w\right|^{2} = (z+w)(\bar{z} + \bar{w}) = z\bar{z} + z\bar{w} + \bar{z}w + w\bar{w}$$
$$= \left| z\right|^{2} + \left| w\right|^{2} + (z\bar{w} + \overline{z\overline{w}}) = \left| z\right|^{2} + \left| w\right|^{2} + 2\mathrm{Re}(z\bar{w})$$
Ainsi, 
$$(\left| z\right| +  \left| w\right|)^{2} - \left| z + w\right|^{2} =2 (\left| z\bar{w}\right| - \mathrm{Re}(z\bar{w}))$$


## 3.
On a :
$$2(\left| z\bar{w}\right|- \mathrm{Re}(z\bar{w})) \geq 0$$
Alors, 
$$(\left| z\right| + \left| w\right|)^{2} \geq \left| z + w\right|^{2}$$
Ainsi, comme $\left| \cdot\right|$ est positive : 
$$\left| z\right| + \left| w\right| \geq \left| z+w\right|$$

Cas d'égalité : 
Supposons que : 
$$2(\left| z\bar{w}\right|- \mathrm{Re}(z\bar{w})) \geq 0 = 0$$