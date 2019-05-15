template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; template <> void RegisterClass<Animation>(const char*);
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>(const char*);
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>(const char*);
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. NavMeshAgent
	RegisterClass<NavMeshAgent>("AI");
	//1. Behaviour
	RegisterClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//4. Camera
	RegisterClass<Camera>("Core");
	//5. GameObject
	RegisterClass<GameObject>("Core");
	//6. GUIElement
	RegisterClass<GUIElement>("Core");
	//7. GUILayer
	RegisterClass<GUILayer>("Core");
	//8. Light
	RegisterClass<Light>("Core");
	//9. Shader
	RegisterClass<Shader>("Core");
	//10. NamedObject
	RegisterClass<NamedObject>("Core");
	//11. Material
	RegisterClass<Material>("Core");
	//12. Sprite
	RegisterClass<Sprite>("Core");
	//13. Texture
	RegisterClass<Texture>("Core");
	//14. Texture2D
	RegisterClass<Texture2D>("Core");
	//15. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//16. Transform
	RegisterClass<Transform>("Core");
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//18. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//19. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//20. GameManager
	RegisterClass<GameManager>("Core");
	//21. LineRenderer
	RegisterClass<LineRenderer>("Core");
	//22. Renderer
	RegisterClass<Renderer>("Core");
	//23. Mesh
	RegisterClass<Mesh>("Core");
	//24. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//25. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//26. Unity::Joint
	RegisterClass<Unity::Joint>("Physics");
	//27. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>("Physics");
	//28. Collider
	RegisterClass<Collider>("Physics");
	//29. CapsuleCollider
	RegisterClass<CapsuleCollider>("Physics");
	//30. PhysicMaterial
	RegisterClass<PhysicMaterial>("Physics");
	//31. Animation
	RegisterClass<Animation>("Animation");
	//32. Animator
	RegisterClass<Animator>("Animation");
	//33. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//34. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//35. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//36. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//37. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//38. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//39. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>("TextRendering");
	//40. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//41. AudioClip
	RegisterClass<AudioClip>("Audio");
	//42. SampleClip
	RegisterClass<SampleClip>("Audio");
	//43. AudioListener
	RegisterClass<AudioListener>("Audio");
	//44. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//45. AudioSource
	RegisterClass<AudioSource>("Audio");
	//46. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//47. PreloadData
	RegisterClass<PreloadData>("Core");
	//48. Cubemap
	RegisterClass<Cubemap>("Core");
	//49. Texture3D
	RegisterClass<Texture3D>("Core");
	//50. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//51. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//52. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//53. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//54. TagManager
	RegisterClass<TagManager>("Core");
	//55. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//56. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//57. InputManager
	RegisterClass<InputManager>("Core");
	//58. TimeManager
	RegisterClass<TimeManager>("Core");
	//59. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//60. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//61. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//62. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//63. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//64. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//65. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//66. MonoManager
	RegisterClass<MonoManager>("Core");
	//67. MonoScript
	RegisterClass<MonoScript>("Core");
	//68. TextAsset
	RegisterClass<TextAsset>("Core");
	//69. AudioManager
	RegisterClass<AudioManager>("Audio");
	//70. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//71. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//72. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>("AI");
	//73. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//74. LightProbes
	RegisterClass<LightProbes>("Core");
	//75. ReflectionProbe
	RegisterClass<ReflectionProbe>("Core");
	//76. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//77. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//78. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//79. NavMeshSettings
	RegisterClass<NavMeshSettings>("AI");

}
